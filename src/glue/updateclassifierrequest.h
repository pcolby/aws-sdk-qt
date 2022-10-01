// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFIERREQUEST_H
#define QTAWS_UPDATECLASSIFIERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateClassifierRequestPrivate;

class QTAWSGLUE_EXPORT UpdateClassifierRequest : public GlueRequest {

public:
    UpdateClassifierRequest(const UpdateClassifierRequest &other);
    UpdateClassifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
