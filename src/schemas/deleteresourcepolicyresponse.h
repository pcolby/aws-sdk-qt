// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYRESPONSE_H
#define QTAWS_DELETERESOURCEPOLICYRESPONSE_H

#include "schemasresponse.h"
#include "deleteresourcepolicyrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteResourcePolicyResponsePrivate;

class QTAWSSCHEMAS_EXPORT DeleteResourcePolicyResponse : public SchemasResponse {
    Q_OBJECT

public:
    DeleteResourcePolicyResponse(const DeleteResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyResponse)
    Q_DISABLE_COPY(DeleteResourcePolicyResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
