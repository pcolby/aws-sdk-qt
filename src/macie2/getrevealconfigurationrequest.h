// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVEALCONFIGURATIONREQUEST_H
#define QTAWS_GETREVEALCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetRevealConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT GetRevealConfigurationRequest : public Macie2Request {

public:
    GetRevealConfigurationRequest(const GetRevealConfigurationRequest &other);
    GetRevealConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRevealConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
