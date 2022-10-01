// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESREQUEST_H
#define QTAWS_LISTTEMPLATESREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListTemplatesRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListTemplatesRequest : public QuickSightRequest {

public:
    ListTemplatesRequest(const ListTemplatesRequest &other);
    ListTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTemplatesRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
