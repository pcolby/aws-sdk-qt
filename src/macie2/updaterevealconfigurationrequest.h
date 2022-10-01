// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVEALCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEREVEALCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class UpdateRevealConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT UpdateRevealConfigurationRequest : public Macie2Request {

public:
    UpdateRevealConfigurationRequest(const UpdateRevealConfigurationRequest &other);
    UpdateRevealConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRevealConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
