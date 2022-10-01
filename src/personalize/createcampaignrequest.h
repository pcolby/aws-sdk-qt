// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNREQUEST_H
#define QTAWS_CREATECAMPAIGNREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class CreateCampaignRequestPrivate;

class QTAWSPERSONALIZE_EXPORT CreateCampaignRequest : public PersonalizeRequest {

public:
    CreateCampaignRequest(const CreateCampaignRequest &other);
    CreateCampaignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
