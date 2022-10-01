// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTMANAGERDEFINITIONRESPONSE_H
#define QTAWS_CREATEALERTMANAGERDEFINITIONRESPONSE_H

#include "ampresponse.h"
#include "createalertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class CreateAlertManagerDefinitionResponsePrivate;

class QTAWSAMP_EXPORT CreateAlertManagerDefinitionResponse : public AmpResponse {
    Q_OBJECT

public:
    CreateAlertManagerDefinitionResponse(const CreateAlertManagerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAlertManagerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(CreateAlertManagerDefinitionResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
