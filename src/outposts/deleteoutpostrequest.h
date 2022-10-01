// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTPOSTREQUEST_H
#define QTAWS_DELETEOUTPOSTREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class DeleteOutpostRequestPrivate;

class QTAWSOUTPOSTS_EXPORT DeleteOutpostRequest : public OutpostsRequest {

public:
    DeleteOutpostRequest(const DeleteOutpostRequest &other);
    DeleteOutpostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
