// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATEALIASREQUEST_H
#define QTAWS_CREATETEMPLATEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateTemplateAliasRequest : public QuickSightRequest {

public:
    CreateTemplateAliasRequest(const CreateTemplateAliasRequest &other);
    CreateTemplateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
