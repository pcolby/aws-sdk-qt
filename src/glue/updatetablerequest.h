// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREQUEST_H
#define QTAWS_UPDATETABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateTableRequestPrivate;

class QTAWSGLUE_EXPORT UpdateTableRequest : public GlueRequest {

public:
    UpdateTableRequest(const UpdateTableRequest &other);
    UpdateTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
