// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALERTMANAGERDEFINITIONRESPONSE_H
#define QTAWS_PUTALERTMANAGERDEFINITIONRESPONSE_H

#include "ampresponse.h"
#include "putalertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class PutAlertManagerDefinitionResponsePrivate;

class QTAWSAMP_EXPORT PutAlertManagerDefinitionResponse : public AmpResponse {
    Q_OBJECT

public:
    PutAlertManagerDefinitionResponse(const PutAlertManagerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAlertManagerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(PutAlertManagerDefinitionResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
