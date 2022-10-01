// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTEBOOKEXECUTIONSREQUEST_H
#define QTAWS_LISTNOTEBOOKEXECUTIONSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListNotebookExecutionsRequestPrivate;

class QTAWSEMR_EXPORT ListNotebookExecutionsRequest : public EmrRequest {

public:
    ListNotebookExecutionsRequest(const ListNotebookExecutionsRequest &other);
    ListNotebookExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotebookExecutionsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
