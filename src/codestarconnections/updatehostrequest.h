// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTREQUEST_H
#define QTAWS_UPDATEHOSTREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class UpdateHostRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT UpdateHostRequest : public CodeStarconnectionsRequest {

public:
    UpdateHostRequest(const UpdateHostRequest &other);
    UpdateHostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
