// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHAPGRESPONSE_H
#define QTAWS_DELETEHAPGRESPONSE_H

#include "cloudhsmresponse.h"
#include "deletehapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteHapgResponsePrivate;

class QTAWSCLOUDHSM_EXPORT DeleteHapgResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    DeleteHapgResponse(const DeleteHapgRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHapgRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHapgResponse)
    Q_DISABLE_COPY(DeleteHapgResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
