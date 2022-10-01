// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATESREQUEST_H
#define QTAWS_LISTSERVICETEMPLATESREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplatesRequestPrivate;

class QTAWSPROTON_EXPORT ListServiceTemplatesRequest : public ProtonRequest {

public:
    ListServiceTemplatesRequest(const ListServiceTemplatesRequest &other);
    ListServiceTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceTemplatesRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
