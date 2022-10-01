// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIOLATIONDETAILSRESPONSE_H
#define QTAWS_GETVIOLATIONDETAILSRESPONSE_H

#include "fmsresponse.h"
#include "getviolationdetailsrequest.h"

namespace QtAws {
namespace Fms {

class GetViolationDetailsResponsePrivate;

class QTAWSFMS_EXPORT GetViolationDetailsResponse : public FmsResponse {
    Q_OBJECT

public:
    GetViolationDetailsResponse(const GetViolationDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetViolationDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetViolationDetailsResponse)
    Q_DISABLE_COPY(GetViolationDetailsResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
