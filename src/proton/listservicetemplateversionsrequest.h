// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICETEMPLATEVERSIONSREQUEST_H
#define QTAWS_LISTSERVICETEMPLATEVERSIONSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceTemplateVersionsRequestPrivate;

class QTAWSPROTON_EXPORT ListServiceTemplateVersionsRequest : public ProtonRequest {

public:
    ListServiceTemplateVersionsRequest(const ListServiceTemplateVersionsRequest &other);
    ListServiceTemplateVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceTemplateVersionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
