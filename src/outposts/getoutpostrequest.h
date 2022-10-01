// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTREQUEST_H
#define QTAWS_GETOUTPOSTREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetOutpostRequest : public OutpostsRequest {

public:
    GetOutpostRequest(const GetOutpostRequest &other);
    GetOutpostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
