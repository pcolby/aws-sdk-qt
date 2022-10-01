// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESBYEXTERNALIDRESPONSE_H
#define QTAWS_DELETERESOURCESBYEXTERNALIDRESPONSE_H

#include "codedeployresponse.h"
#include "deleteresourcesbyexternalidrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteResourcesByExternalIdResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteResourcesByExternalIdResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    DeleteResourcesByExternalIdResponse(const DeleteResourcesByExternalIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourcesByExternalIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcesByExternalIdResponse)
    Q_DISABLE_COPY(DeleteResourcesByExternalIdResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
