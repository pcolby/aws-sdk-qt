// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMARTHOMEAPPLIANCESRESPONSE_H
#define QTAWS_LISTSMARTHOMEAPPLIANCESRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listsmarthomeappliancesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSmartHomeAppliancesResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSmartHomeAppliancesResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListSmartHomeAppliancesResponse(const ListSmartHomeAppliancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSmartHomeAppliancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSmartHomeAppliancesResponse)
    Q_DISABLE_COPY(ListSmartHomeAppliancesResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
