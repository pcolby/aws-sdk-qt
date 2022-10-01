// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORMSREQUEST_H
#define QTAWS_LISTFORMSREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListFormsRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ListFormsRequest : public AmplifyUIBuilderRequest {

public:
    ListFormsRequest(const ListFormsRequest &other);
    ListFormsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFormsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
