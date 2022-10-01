// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOPICATTRIBUTESRESPONSE_H
#define QTAWS_GETTOPICATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "gettopicattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetTopicAttributesResponsePrivate;

class QTAWSSNS_EXPORT GetTopicAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetTopicAttributesResponse(const GetTopicAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTopicAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTopicAttributesResponse)
    Q_DISABLE_COPY(GetTopicAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
