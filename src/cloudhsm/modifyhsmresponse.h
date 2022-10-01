// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHSMRESPONSE_H
#define QTAWS_MODIFYHSMRESPONSE_H

#include "cloudhsmresponse.h"
#include "modifyhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHsmResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ModifyHsmResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ModifyHsmResponse(const ModifyHsmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyHsmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHsmResponse)
    Q_DISABLE_COPY(ModifyHsmResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
