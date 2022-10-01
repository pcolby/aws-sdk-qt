// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERBYPRINCIPALIDRESPONSE_H
#define QTAWS_DELETEUSERBYPRINCIPALIDRESPONSE_H

#include "quicksightresponse.h"
#include "deleteuserbyprincipalidrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteUserByPrincipalIdResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteUserByPrincipalIdResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteUserByPrincipalIdResponse(const DeleteUserByPrincipalIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserByPrincipalIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserByPrincipalIdResponse)
    Q_DISABLE_COPY(DeleteUserByPrincipalIdResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
