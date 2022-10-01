// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class PutFindingsPublicationConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT PutFindingsPublicationConfigurationRequest : public Macie2Request {

public:
    PutFindingsPublicationConfigurationRequest(const PutFindingsPublicationConfigurationRequest &other);
    PutFindingsPublicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFindingsPublicationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
