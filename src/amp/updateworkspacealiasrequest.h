// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEALIASREQUEST_H
#define QTAWS_UPDATEWORKSPACEALIASREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class UpdateWorkspaceAliasRequestPrivate;

class QTAWSAMP_EXPORT UpdateWorkspaceAliasRequest : public AmpRequest {

public:
    UpdateWorkspaceAliasRequest(const UpdateWorkspaceAliasRequest &other);
    UpdateWorkspaceAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkspaceAliasRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
