// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEALIASRESPONSE_H
#define QTAWS_UPDATEWORKSPACEALIASRESPONSE_H

#include "ampresponse.h"
#include "updateworkspacealiasrequest.h"

namespace QtAws {
namespace Amp {

class UpdateWorkspaceAliasResponsePrivate;

class QTAWSAMP_EXPORT UpdateWorkspaceAliasResponse : public AmpResponse {
    Q_OBJECT

public:
    UpdateWorkspaceAliasResponse(const UpdateWorkspaceAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkspaceAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceAliasResponse)
    Q_DISABLE_COPY(UpdateWorkspaceAliasResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
