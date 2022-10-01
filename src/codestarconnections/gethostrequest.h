// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTREQUEST_H
#define QTAWS_GETHOSTREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class GetHostRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT GetHostRequest : public CodeStarconnectionsRequest {

public:
    GetHostRequest(const GetHostRequest &other);
    GetHostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
