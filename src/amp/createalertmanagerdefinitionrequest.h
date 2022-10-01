// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTMANAGERDEFINITIONREQUEST_H
#define QTAWS_CREATEALERTMANAGERDEFINITIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class CreateAlertManagerDefinitionRequestPrivate;

class QTAWSAMP_EXPORT CreateAlertManagerDefinitionRequest : public AmpRequest {

public:
    CreateAlertManagerDefinitionRequest(const CreateAlertManagerDefinitionRequest &other);
    CreateAlertManagerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
