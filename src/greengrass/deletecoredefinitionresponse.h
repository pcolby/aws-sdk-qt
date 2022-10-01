// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEFINITIONRESPONSE_H
#define QTAWS_DELETECOREDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deletecoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteCoreDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteCoreDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteCoreDefinitionResponse(const DeleteCoreDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCoreDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreDefinitionResponse)
    Q_DISABLE_COPY(DeleteCoreDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
