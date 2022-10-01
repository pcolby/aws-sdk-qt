// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELUNACLIENTRESPONSE_H
#define QTAWS_DELETELUNACLIENTRESPONSE_H

#include "cloudhsmresponse.h"
#include "deletelunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteLunaClientResponsePrivate;

class QTAWSCLOUDHSM_EXPORT DeleteLunaClientResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    DeleteLunaClientResponse(const DeleteLunaClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLunaClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLunaClientResponse)
    Q_DISABLE_COPY(DeleteLunaClientResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
