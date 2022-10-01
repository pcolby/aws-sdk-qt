// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESREQUEST_H
#define QTAWS_LISTTHEMESREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListThemesRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ListThemesRequest : public AmplifyUIBuilderRequest {

public:
    ListThemesRequest(const ListThemesRequest &other);
    ListThemesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemesRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
