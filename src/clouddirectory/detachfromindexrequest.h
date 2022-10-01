// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHFROMINDEXREQUEST_H
#define QTAWS_DETACHFROMINDEXREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachFromIndexRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachFromIndexRequest : public CloudDirectoryRequest {

public:
    DetachFromIndexRequest(const DetachFromIndexRequest &other);
    DetachFromIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachFromIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
