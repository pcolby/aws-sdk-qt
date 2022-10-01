// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONSRESPONSE_H
#define QTAWS_LISTRESOURCEDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listresourcedefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListResourceDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListResourceDefinitionsResponse(const ListResourceDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDefinitionsResponse)
    Q_DISABLE_COPY(ListResourceDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
