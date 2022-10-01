// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYRESPONSE_H
#define QTAWS_PUTRESOURCEPOLICYRESPONSE_H

#include "schemasresponse.h"
#include "putresourcepolicyrequest.h"

namespace QtAws {
namespace Schemas {

class PutResourcePolicyResponsePrivate;

class QTAWSSCHEMAS_EXPORT PutResourcePolicyResponse : public SchemasResponse {
    Q_OBJECT

public:
    PutResourcePolicyResponse(const PutResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourcePolicyResponse)
    Q_DISABLE_COPY(PutResourcePolicyResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
