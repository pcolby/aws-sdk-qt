// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEREQUEST_H
#define QTAWS_DELETEWORKSPACEREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class DeleteWorkspaceRequestPrivate;

class QTAWSAMP_EXPORT DeleteWorkspaceRequest : public AmpRequest {

public:
    DeleteWorkspaceRequest(const DeleteWorkspaceRequest &other);
    DeleteWorkspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkspaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
