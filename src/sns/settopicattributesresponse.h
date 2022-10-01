// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTOPICATTRIBUTESRESPONSE_H
#define QTAWS_SETTOPICATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "settopicattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetTopicAttributesResponsePrivate;

class QTAWSSNS_EXPORT SetTopicAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    SetTopicAttributesResponse(const SetTopicAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTopicAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTopicAttributesResponse)
    Q_DISABLE_COPY(SetTopicAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
