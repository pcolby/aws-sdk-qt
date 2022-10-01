// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTTEMPLATESREQUEST_H
#define QTAWS_LISTENVIRONMENTTEMPLATESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentTemplatesRequestPrivate;

class QTAWSPROTON_EXPORT ListEnvironmentTemplatesRequest : public ProtonRequest {

public:
    ListEnvironmentTemplatesRequest(const ListEnvironmentTemplatesRequest &other);
    ListEnvironmentTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentTemplatesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
