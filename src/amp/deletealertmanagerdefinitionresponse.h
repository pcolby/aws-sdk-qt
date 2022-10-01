// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTMANAGERDEFINITIONRESPONSE_H
#define QTAWS_DELETEALERTMANAGERDEFINITIONRESPONSE_H

#include "ampresponse.h"
#include "deletealertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class DeleteAlertManagerDefinitionResponsePrivate;

class QTAWSAMP_EXPORT DeleteAlertManagerDefinitionResponse : public AmpResponse {
    Q_OBJECT

public:
    DeleteAlertManagerDefinitionResponse(const DeleteAlertManagerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlertManagerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(DeleteAlertManagerDefinitionResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
