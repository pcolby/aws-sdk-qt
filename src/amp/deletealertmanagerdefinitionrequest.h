// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTMANAGERDEFINITIONREQUEST_H
#define QTAWS_DELETEALERTMANAGERDEFINITIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class DeleteAlertManagerDefinitionRequestPrivate;

class QTAWSAMP_EXPORT DeleteAlertManagerDefinitionRequest : public AmpRequest {

public:
    DeleteAlertManagerDefinitionRequest(const DeleteAlertManagerDefinitionRequest &other);
    DeleteAlertManagerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
