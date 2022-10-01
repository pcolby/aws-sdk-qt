// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_H
#define QTAWS_LISTCOMPONENTSREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListComponentsRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ListComponentsRequest : public AmplifyUIBuilderRequest {

public:
    ListComponentsRequest(const ListComponentsRequest &other);
    ListComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
