// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHAPGRESPONSE_H
#define QTAWS_MODIFYHAPGRESPONSE_H

#include "cloudhsmresponse.h"
#include "modifyhapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHapgResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ModifyHapgResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ModifyHapgResponse(const ModifyHapgRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyHapgRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHapgResponse)
    Q_DISABLE_COPY(ModifyHapgResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
