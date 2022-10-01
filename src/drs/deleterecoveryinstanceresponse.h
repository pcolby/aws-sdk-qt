// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYINSTANCERESPONSE_H
#define QTAWS_DELETERECOVERYINSTANCERESPONSE_H

#include "drsresponse.h"
#include "deleterecoveryinstancerequest.h"

namespace QtAws {
namespace Drs {

class DeleteRecoveryInstanceResponsePrivate;

class QTAWSDRS_EXPORT DeleteRecoveryInstanceResponse : public DrsResponse {
    Q_OBJECT

public:
    DeleteRecoveryInstanceResponse(const DeleteRecoveryInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecoveryInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecoveryInstanceResponse)
    Q_DISABLE_COPY(DeleteRecoveryInstanceResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
