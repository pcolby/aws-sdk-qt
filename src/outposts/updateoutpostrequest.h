// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOUTPOSTREQUEST_H
#define QTAWS_UPDATEOUTPOSTREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateOutpostRequestPrivate;

class QTAWSOUTPOSTS_EXPORT UpdateOutpostRequest : public OutpostsRequest {

public:
    UpdateOutpostRequest(const UpdateOutpostRequest &other);
    UpdateOutpostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
