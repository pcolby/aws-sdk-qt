// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsPublicationConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT GetFindingsPublicationConfigurationRequest : public Macie2Request {

public:
    GetFindingsPublicationConfigurationRequest(const GetFindingsPublicationConfigurationRequest &other);
    GetFindingsPublicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsPublicationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
