// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACEREQUEST_H
#define QTAWS_DELETENAMESPACEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteNamespaceRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteNamespaceRequest : public QuickSightRequest {

public:
    DeleteNamespaceRequest(const DeleteNamespaceRequest &other);
    DeleteNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNamespaceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
