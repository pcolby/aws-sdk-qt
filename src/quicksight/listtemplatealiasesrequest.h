// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATEALIASESREQUEST_H
#define QTAWS_LISTTEMPLATEALIASESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplateAliasesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListTemplateAliasesRequest : public QuickSightRequest {

public:
    ListTemplateAliasesRequest(const ListTemplateAliasesRequest &other);
    ListTemplateAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplateAliasesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
