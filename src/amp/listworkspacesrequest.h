// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKSPACESREQUEST_H
#define QTAWS_LISTWORKSPACESREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class ListWorkspacesRequestPrivate;

class QTAWSAMP_EXPORT ListWorkspacesRequest : public AmpRequest {

public:
    ListWorkspacesRequest(const ListWorkspacesRequest &other);
    ListWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkspacesRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
