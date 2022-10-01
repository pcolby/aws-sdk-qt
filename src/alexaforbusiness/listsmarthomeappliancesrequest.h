// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMARTHOMEAPPLIANCESREQUEST_H
#define QTAWS_LISTSMARTHOMEAPPLIANCESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSmartHomeAppliancesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSmartHomeAppliancesRequest : public AlexaForBusinessRequest {

public:
    ListSmartHomeAppliancesRequest(const ListSmartHomeAppliancesRequest &other);
    ListSmartHomeAppliancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSmartHomeAppliancesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
