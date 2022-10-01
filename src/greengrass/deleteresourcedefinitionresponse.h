// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDEFINITIONRESPONSE_H
#define QTAWS_DELETERESOURCEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deleteresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteResourceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteResourceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteResourceDefinitionResponse(const DeleteResourceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceDefinitionResponse)
    Q_DISABLE_COPY(DeleteResourceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
