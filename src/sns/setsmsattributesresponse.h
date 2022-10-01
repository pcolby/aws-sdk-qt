// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMSATTRIBUTESRESPONSE_H
#define QTAWS_SETSMSATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "setsmsattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetSMSAttributesResponsePrivate;

class QTAWSSNS_EXPORT SetSMSAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    SetSMSAttributesResponse(const SetSMSAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSMSAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSMSAttributesResponse)
    Q_DISABLE_COPY(SetSMSAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
