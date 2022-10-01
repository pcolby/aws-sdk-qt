// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTREQUEST_H
#define QTAWS_DELETEHOSTREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class DeleteHostRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT DeleteHostRequest : public CodeStarconnectionsRequest {

public:
    DeleteHostRequest(const DeleteHostRequest &other);
    DeleteHostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
