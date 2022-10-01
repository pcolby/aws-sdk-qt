// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSREQUEST_H
#define QTAWS_DELETETAGSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteTagsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteTagsRequest : public RedshiftRequest {

public:
    DeleteTagsRequest(const DeleteTagsRequest &other);
    DeleteTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTagsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
