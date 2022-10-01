// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOVAULTRESPONSE_H
#define QTAWS_ADDTAGSTOVAULTRESPONSE_H

#include "glacierresponse.h"
#include "addtagstovaultrequest.h"

namespace QtAws {
namespace Glacier {

class AddTagsToVaultResponsePrivate;

class QTAWSGLACIER_EXPORT AddTagsToVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    AddTagsToVaultResponse(const AddTagsToVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToVaultResponse)
    Q_DISABLE_COPY(AddTagsToVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
