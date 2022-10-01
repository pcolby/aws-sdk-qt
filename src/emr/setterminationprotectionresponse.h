// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTERMINATIONPROTECTIONRESPONSE_H
#define QTAWS_SETTERMINATIONPROTECTIONRESPONSE_H

#include "emrresponse.h"
#include "setterminationprotectionrequest.h"

namespace QtAws {
namespace Emr {

class SetTerminationProtectionResponsePrivate;

class QTAWSEMR_EXPORT SetTerminationProtectionResponse : public EmrResponse {
    Q_OBJECT

public:
    SetTerminationProtectionResponse(const SetTerminationProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetTerminationProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTerminationProtectionResponse)
    Q_DISABLE_COPY(SetTerminationProtectionResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
