// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTREQUEST_H
#define QTAWS_UPDATECOMPONENTREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateComponentRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT UpdateComponentRequest : public AmplifyUIBuilderRequest {

public:
    UpdateComponentRequest(const UpdateComponentRequest &other);
    UpdateComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
